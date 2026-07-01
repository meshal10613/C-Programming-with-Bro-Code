#include <stdio.h>
#include <math.h>

int main()
{
	double radius, area, surfaceArea, volume = 0.0;
	const double PI = 3.14159;

	printf("Enter the radius of the circle: ");
	scanf("%lf", &radius);

	area = PI * pow(radius, 2);
	printf("The area of the circle is: %.2lf\n", area);

	surfaceArea = 4 * PI * pow(radius, 2);
	printf("The surface area of the sphere is: %.2lf\n", surfaceArea);

	volume = (4.0 / 3.0) * PI * pow(radius, 3);
	printf("The volume of the sphere is: %.2lf\n", volume);

	return 0;
}
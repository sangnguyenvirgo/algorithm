package test_oop;
import java.time.LocalDate;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("hihihih");
		
        Car myCar = new Car();
        myCar.setManufactured(LocalDate.of(2015, 6, 15));
        
        // In ra tuổi của xe
        System.out.println("Age of the car: " + myCar.getAge() + " years");
	}

}

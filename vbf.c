package info.guvi;
import java.util.Scanner;
public class FirstRepeatNo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the size : ");
		int n = sc.nextInt();
		int a[] = new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			for(int j = i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					System.out.println(a[j]);
					i = n;
					break;
				}
				else {
					continue;
				}
			}
		}

	}

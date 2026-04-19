In this project, you will architect an Event Registration System in Java,
focusing on the core principles of Object-Oriented Programming (OOP).
The system's primary objective is to streamline event management and
attendee registration through a user-friendly console-based interface.

1. A class named Event represents an event and encapsulates attributes such
as event Name, event Date, organizer, etc. Add any other attributes of
your choice if you want. The Event class must have two or more
overloaded constructors based on your preferences.
2. A class named Attendee defines an attendee participating in an event with
attributes like attendee Name, email, birth date, and possibly other
pertinent details of your choice. The Attendee class must have two or
more overloaded constructors based on your preferences.
3. A class named Event Organizer represents the organizer or organization
hosting events with attributes like organizer name, organizer email,
organizer address, and more based on your imagination and choice. The
Organizer class has only a default constructor.
4. Classes named Conference and Workshop are subtypes of the Event class
inheriting from it and adding extra attributes and behavior respectively.
5. Classes named VIP Attendee and Premium Attendee are subtypes of the
Attendee class inheriting from it and adding extra attributes and behavior
respectively.
6. A class named Event Registration System serves as a test program for
testing the operation of the implemented classes and takes the user input
to the whole application.
6
7. Ensure proper encapsulation of attributes in all classes by controlling
access to all attributes via getter and setter methods.
8. Implement methods to modify details for objects created of an
implemented class and securely retrieve information.
9. A console-based interface for users to interact with the whole application.
10. Provide options to modify event details, attendee information, and
organizer data. Preserve data integrity and perform other related
functionalities from your point of view if you wish.
11. Keep in mind that each Event must have at least one Attendee and in some
cases, an Event may have many Attendees. Also, each Attendee attends
one Event or more. In addition, the Event Organizer owns the event they
organize.

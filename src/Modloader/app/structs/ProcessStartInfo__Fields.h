#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProcessStartInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProcessStartInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProcessStartInfo__Fields_DEFINED)
#include <Modloader/app/structs/ProcessWindowStyle__Enum.h>
#if defined(IL2CPP_STRUCT_ProcessWindowStyle__Enum_DEFINED)
#define IL2CPP_STRUCT_ProcessStartInfo__Fields_DEFINED
struct String;
struct SecureString;
struct Encoding;
struct WeakReference;
struct StringDictionary;
struct IDictionary_2_System_String_System_String_;
struct __declspec(align(8)) ProcessStartInfo__Fields {
    struct String* fileName;
    struct String* arguments;
    struct String* directory;
    struct String* verb;
    ProcessWindowStyle__Enum windowStyle;

    bool errorDialog;
    void* errorDialogParentHandle;
    bool useShellExecute;
    struct String* userName;
    struct String* domain;
    struct SecureString* password;
    struct String* passwordInClearText;
    bool loadUserProfile;
    bool redirectStandardInput;
    bool redirectStandardOutput;
    bool redirectStandardError;
    struct Encoding* standardOutputEncoding;
    struct Encoding* standardErrorEncoding;
    bool createNoWindow;
    struct WeakReference* weakParentProcess;
    struct StringDictionary* environmentVariables;
    struct IDictionary_2_System_String_System_String_* environment;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProcessStartInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_ProcessStartInfo__Fields_FWDDECL
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/SecureString.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringDictionary.h>
#include <Modloader/app/structs/WeakReference.h>
#endif
#undef IL2CPP_STRUCT_ProcessStartInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProcessStartInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ProcessStartInfo__Fields_FWDDECL)
#include <Modloader/app/structs/ProcessStartInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProcessStartInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

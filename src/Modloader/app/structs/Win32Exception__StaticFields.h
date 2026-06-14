#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Win32Exception__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Win32Exception__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32Exception__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Win32Exception__StaticFields_DEFINED
struct Dictionary_2_System_Int32_System_String_;
struct Win32Exception__StaticFields {
    bool s_ErrorMessagesInitialized;
    struct Dictionary_2_System_Int32_System_String_* s_ErrorMessage;
};
#endif
#if !defined(IL2CPP_STRUCT_Win32Exception__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Win32Exception__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_String_.h>
#endif
#undef IL2CPP_STRUCT_Win32Exception__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32Exception__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Win32Exception__StaticFields_FWDDECL)
#include <Modloader/app/structs/Win32Exception__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Win32Exception__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

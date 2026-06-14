#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConsoleCancelEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConsoleCancelEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleCancelEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/ConsoleSpecialKey__Enum.h>
#if defined(IL2CPP_STRUCT_ConsoleSpecialKey__Enum_DEFINED)
#define IL2CPP_STRUCT_ConsoleCancelEventArgs__Fields_DEFINED
struct __declspec(align(8)) ConsoleCancelEventArgs__Fields {
    ConsoleSpecialKey__Enum _type;

    bool _cancel;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConsoleCancelEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConsoleCancelEventArgs__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ConsoleCancelEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleCancelEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConsoleCancelEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/ConsoleCancelEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConsoleCancelEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

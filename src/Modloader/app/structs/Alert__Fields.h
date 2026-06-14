#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Alert__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Alert__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Alert__Fields_DEFINED)
#include <Modloader/app/structs/AlertDescription__Enum_1.h>
#include <Modloader/app/structs/AlertLevel__Enum.h>
#if defined(IL2CPP_STRUCT_AlertLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_AlertDescription__Enum_1_DEFINED)
#define IL2CPP_STRUCT_Alert__Fields_DEFINED
struct __declspec(align(8)) Alert__Fields {
    AlertLevel__Enum level;

    AlertDescription__Enum_1 description;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Alert__Fields_FWDDECL)
#define IL2CPP_STRUCT_Alert__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Alert__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Alert__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Alert__Fields_FWDDECL)
#include <Modloader/app/structs/Alert__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Alert__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

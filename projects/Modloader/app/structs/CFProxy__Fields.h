#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFProxy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_CFProxy__Fields_DEFINED
struct CFDictionary;
struct __declspec(align(8)) CFProxy__Fields {
    struct CFDictionary* settings;
};
#endif
#if !defined(IL2CPP_STRUCT_CFProxy__Fields_FWDDECL)
#define IL2CPP_STRUCT_CFProxy__Fields_FWDDECL
#include <Modloader/app/structs/CFDictionary.h>
#endif
#undef IL2CPP_STRUCT_CFProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFProxy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CFProxy__Fields_FWDDECL)
#include <Modloader/app/structs/CFProxy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFProxy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

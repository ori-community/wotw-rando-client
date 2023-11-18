#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonDebugMessage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonDebugMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDebugMessage__Fields_DEFINED)
#include <Modloader/app/structs/MoonDebugMessageType__Enum.h>
#if defined(IL2CPP_STRUCT_MoonDebugMessageType__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonDebugMessage__Fields_DEFINED
struct String;
struct Object_1;
struct __declspec(align(8)) MoonDebugMessage__Fields {
    MoonDebugMessageType__Enum m_type;

    struct String* m_text;
    struct Object_1* m_object;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonDebugMessage__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonDebugMessage__Fields_FWDDECL
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonDebugMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDebugMessage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonDebugMessage__Fields_FWDDECL)
#include <Modloader/app/structs/MoonDebugMessage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonDebugMessage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

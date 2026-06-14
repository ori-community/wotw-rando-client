#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WellKnownServiceTypeEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WellKnownServiceTypeEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WellKnownServiceTypeEntry__Fields_DEFINED)
#include <Modloader/app/structs/TypeEntry__Fields.h>
#include <Modloader/app/structs/WellKnownObjectMode__Enum.h>
#if defined(IL2CPP_STRUCT_TypeEntry__Fields_DEFINED) && defined(IL2CPP_STRUCT_WellKnownObjectMode__Enum_DEFINED)
#define IL2CPP_STRUCT_WellKnownServiceTypeEntry__Fields_DEFINED
struct Type;
struct String;
struct WellKnownServiceTypeEntry__Fields {
    struct TypeEntry__Fields _;
    struct Type* obj_type;
    struct String* obj_uri;
    WellKnownObjectMode__Enum obj_mode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WellKnownServiceTypeEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_WellKnownServiceTypeEntry__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_WellKnownServiceTypeEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WellKnownServiceTypeEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WellKnownServiceTypeEntry__Fields_FWDDECL)
#include <Modloader/app/structs/WellKnownServiceTypeEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WellKnownServiceTypeEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

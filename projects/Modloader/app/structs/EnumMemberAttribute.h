#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumMemberAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumMemberAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumMemberAttribute_DEFINED)
#include <Modloader/app/structs/EnumMemberAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_EnumMemberAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_EnumMemberAttribute_DEFINED
struct EnumMemberAttribute__Class;
struct EnumMemberAttribute {
    struct EnumMemberAttribute__Class* klass;
    MonitorData* monitor;
    struct EnumMemberAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnumMemberAttribute_FWDDECL)
#define IL2CPP_STRUCT_EnumMemberAttribute_FWDDECL
#include <Modloader/app/structs/EnumMemberAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_EnumMemberAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumMemberAttribute_DEFINED) && !defined(IL2CPP_STRUCT_EnumMemberAttribute_FWDDECL)
#include <Modloader/app/structs/EnumMemberAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumMemberAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

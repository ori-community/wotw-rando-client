#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultMemberAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultMemberAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultMemberAttribute_DEFINED)
#include <Modloader/app/structs/DefaultMemberAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultMemberAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultMemberAttribute_DEFINED
struct DefaultMemberAttribute__Class;
struct DefaultMemberAttribute {
    struct DefaultMemberAttribute__Class* klass;
    MonitorData* monitor;
    struct DefaultMemberAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultMemberAttribute_FWDDECL)
#define IL2CPP_STRUCT_DefaultMemberAttribute_FWDDECL
#include <Modloader/app/structs/DefaultMemberAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultMemberAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultMemberAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DefaultMemberAttribute_FWDDECL)
#include <Modloader/app/structs/DefaultMemberAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultMemberAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

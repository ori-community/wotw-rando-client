#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IgnoreDataMemberAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IgnoreDataMemberAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreDataMemberAttribute_DEFINED)
#define IL2CPP_STRUCT_IgnoreDataMemberAttribute_DEFINED
struct IgnoreDataMemberAttribute__Class;
struct IgnoreDataMemberAttribute {
    struct IgnoreDataMemberAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IgnoreDataMemberAttribute_FWDDECL)
#define IL2CPP_STRUCT_IgnoreDataMemberAttribute_FWDDECL
#include <Modloader/app/structs/IgnoreDataMemberAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_IgnoreDataMemberAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreDataMemberAttribute_DEFINED) && !defined(IL2CPP_STRUCT_IgnoreDataMemberAttribute_FWDDECL)
#include <Modloader/app/structs/IgnoreDataMemberAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IgnoreDataMemberAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

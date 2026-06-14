#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MembershipModel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MembershipModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_MembershipModel_DEFINED)
#include <Modloader/app/structs/MembershipModel__Fields.h>
#if defined(IL2CPP_STRUCT_MembershipModel__Fields_DEFINED)
#define IL2CPP_STRUCT_MembershipModel_DEFINED
struct MembershipModel__Class;
struct MembershipModel {
    struct MembershipModel__Class* klass;
    MonitorData* monitor;
    struct MembershipModel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MembershipModel_FWDDECL)
#define IL2CPP_STRUCT_MembershipModel_FWDDECL
#include <Modloader/app/structs/MembershipModel__Class.h>
#endif
#undef IL2CPP_STRUCT_MembershipModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_MembershipModel_DEFINED) && !defined(IL2CPP_STRUCT_MembershipModel_FWDDECL)
#include <Modloader/app/structs/MembershipModel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MembershipModel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

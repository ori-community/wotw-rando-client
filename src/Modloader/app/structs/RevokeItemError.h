#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RevokeItemError_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RevokeItemError_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeItemError_DEFINED)
#include <Modloader/app/structs/RevokeItemError__Fields.h>
#if defined(IL2CPP_STRUCT_RevokeItemError__Fields_DEFINED)
#define IL2CPP_STRUCT_RevokeItemError_DEFINED
struct RevokeItemError__Class;
struct RevokeItemError {
    struct RevokeItemError__Class* klass;
    MonitorData* monitor;
    struct RevokeItemError__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RevokeItemError_FWDDECL)
#define IL2CPP_STRUCT_RevokeItemError_FWDDECL
#include <Modloader/app/structs/RevokeItemError__Class.h>
#endif
#undef IL2CPP_STRUCT_RevokeItemError_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeItemError_DEFINED) && !defined(IL2CPP_STRUCT_RevokeItemError_FWDDECL)
#include <Modloader/app/structs/RevokeItemError.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RevokeItemError.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IK_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IK_INITIALIZING
#if !defined(IL2CPP_STRUCT_IK_DEFINED)
#include <Modloader/app/structs/IK__Fields.h>
#if defined(IL2CPP_STRUCT_IK__Fields_DEFINED)
#define IL2CPP_STRUCT_IK_DEFINED
struct IK__Class;
struct IK {
    struct IK__Class* klass;
    MonitorData* monitor;
    struct IK__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IK_FWDDECL)
#define IL2CPP_STRUCT_IK_FWDDECL
#include <Modloader/app/structs/IK__Class.h>
#endif
#undef IL2CPP_STRUCT_IK_INITIALIZING
#if !defined(IL2CPP_STRUCT_IK_DEFINED) && !defined(IL2CPP_STRUCT_IK_FWDDECL)
#include <Modloader/app/structs/IK.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IK.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

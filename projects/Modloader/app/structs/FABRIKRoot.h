#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FABRIKRoot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FABRIKRoot_INITIALIZING
#if !defined(IL2CPP_STRUCT_FABRIKRoot_DEFINED)
#include <Modloader/app/structs/FABRIKRoot__Fields.h>
#if defined(IL2CPP_STRUCT_FABRIKRoot__Fields_DEFINED)
#define IL2CPP_STRUCT_FABRIKRoot_DEFINED
struct FABRIKRoot__Class;
struct FABRIKRoot {
    struct FABRIKRoot__Class* klass;
    MonitorData* monitor;
    struct FABRIKRoot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FABRIKRoot_FWDDECL)
#define IL2CPP_STRUCT_FABRIKRoot_FWDDECL
#include <Modloader/app/structs/FABRIKRoot__Class.h>
#endif
#undef IL2CPP_STRUCT_FABRIKRoot_INITIALIZING
#if !defined(IL2CPP_STRUCT_FABRIKRoot_DEFINED) && !defined(IL2CPP_STRUCT_FABRIKRoot_FWDDECL)
#include <Modloader/app/structs/FABRIKRoot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FABRIKRoot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

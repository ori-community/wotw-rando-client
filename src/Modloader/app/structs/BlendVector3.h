#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlendVector3_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlendVector3_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendVector3_DEFINED)
#include <Modloader/app/structs/BlendVector3__Fields.h>
#if defined(IL2CPP_STRUCT_BlendVector3__Fields_DEFINED)
#define IL2CPP_STRUCT_BlendVector3_DEFINED
struct BlendVector3__Class;
struct BlendVector3 {
    struct BlendVector3__Class* klass;
    MonitorData* monitor;
    struct BlendVector3__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlendVector3_FWDDECL)
#define IL2CPP_STRUCT_BlendVector3_FWDDECL
#include <Modloader/app/structs/BlendVector3__Class.h>
#endif
#undef IL2CPP_STRUCT_BlendVector3_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendVector3_DEFINED) && !defined(IL2CPP_STRUCT_BlendVector3_FWDDECL)
#include <Modloader/app/structs/BlendVector3.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlendVector3.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

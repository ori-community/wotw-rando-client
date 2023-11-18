#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShadowEmitter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShadowEmitter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShadowEmitter_DEFINED)
#include <Modloader/app/structs/ShadowEmitter__Fields.h>
#if defined(IL2CPP_STRUCT_ShadowEmitter__Fields_DEFINED)
#define IL2CPP_STRUCT_ShadowEmitter_DEFINED
struct ShadowEmitter__Class;
struct ShadowEmitter {
    struct ShadowEmitter__Class* klass;
    MonitorData* monitor;
    struct ShadowEmitter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShadowEmitter_FWDDECL)
#define IL2CPP_STRUCT_ShadowEmitter_FWDDECL
#include <Modloader/app/structs/ShadowEmitter__Class.h>
#endif
#undef IL2CPP_STRUCT_ShadowEmitter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShadowEmitter_DEFINED) && !defined(IL2CPP_STRUCT_ShadowEmitter_FWDDECL)
#include <Modloader/app/structs/ShadowEmitter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShadowEmitter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

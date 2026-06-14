#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseVertexEffect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseVertexEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseVertexEffect_DEFINED)
#define IL2CPP_STRUCT_BaseVertexEffect_DEFINED
struct BaseVertexEffect__Class;
struct BaseVertexEffect {
    struct BaseVertexEffect__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BaseVertexEffect_FWDDECL)
#define IL2CPP_STRUCT_BaseVertexEffect_FWDDECL
#include <Modloader/app/structs/BaseVertexEffect__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseVertexEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseVertexEffect_DEFINED) && !defined(IL2CPP_STRUCT_BaseVertexEffect_FWDDECL)
#include <Modloader/app/structs/BaseVertexEffect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseVertexEffect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

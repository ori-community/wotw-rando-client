#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityWeightResolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityWeightResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityWeightResolver_DEFINED)
#define IL2CPP_STRUCT_EntityWeightResolver_DEFINED
struct EntityWeightResolver__Class;
struct EntityWeightResolver {
    struct EntityWeightResolver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EntityWeightResolver_FWDDECL)
#define IL2CPP_STRUCT_EntityWeightResolver_FWDDECL
#include <Modloader/app/structs/EntityWeightResolver__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityWeightResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityWeightResolver_DEFINED) && !defined(IL2CPP_STRUCT_EntityWeightResolver_FWDDECL)
#include <Modloader/app/structs/EntityWeightResolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityWeightResolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

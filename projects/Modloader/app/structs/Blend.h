#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Blend_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Blend_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blend_DEFINED)
#include <Modloader/app/structs/Blend__Fields.h>
#if defined(IL2CPP_STRUCT_Blend__Fields_DEFINED)
#define IL2CPP_STRUCT_Blend_DEFINED
struct Blend__Class;
struct Blend {
    struct Blend__Class* klass;
    MonitorData* monitor;
    struct Blend__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Blend_FWDDECL)
#define IL2CPP_STRUCT_Blend_FWDDECL
#include <Modloader/app/structs/Blend__Class.h>
#endif
#undef IL2CPP_STRUCT_Blend_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blend_DEFINED) && !defined(IL2CPP_STRUCT_Blend_FWDDECL)
#include <Modloader/app/structs/Blend.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Blend.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

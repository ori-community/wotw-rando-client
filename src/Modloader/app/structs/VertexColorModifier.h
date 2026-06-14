#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VertexColorModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VertexColorModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexColorModifier_DEFINED)
#include <Modloader/app/structs/VertexColorModifier__Fields.h>
#if defined(IL2CPP_STRUCT_VertexColorModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_VertexColorModifier_DEFINED
struct VertexColorModifier__Class;
struct VertexColorModifier {
    struct VertexColorModifier__Class* klass;
    MonitorData* monitor;
    struct VertexColorModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VertexColorModifier_FWDDECL)
#define IL2CPP_STRUCT_VertexColorModifier_FWDDECL
#include <Modloader/app/structs/VertexColorModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_VertexColorModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexColorModifier_DEFINED) && !defined(IL2CPP_STRUCT_VertexColorModifier_FWDDECL)
#include <Modloader/app/structs/VertexColorModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VertexColorModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

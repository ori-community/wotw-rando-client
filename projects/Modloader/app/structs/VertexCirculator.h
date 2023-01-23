#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VertexCirculator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VertexCirculator_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexCirculator_DEFINED)
#include <Modloader/app/structs/VertexCirculator__Fields.h>
#if defined(IL2CPP_STRUCT_VertexCirculator__Fields_DEFINED)
#define IL2CPP_STRUCT_VertexCirculator_DEFINED
struct VertexCirculator__Class;
struct VertexCirculator {
    struct VertexCirculator__Class* klass;
    MonitorData* monitor;
    struct VertexCirculator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VertexCirculator_FWDDECL)
#define IL2CPP_STRUCT_VertexCirculator_FWDDECL
#include <Modloader/app/structs/VertexCirculator__Class.h>
#endif
#undef IL2CPP_STRUCT_VertexCirculator_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexCirculator_DEFINED) && !defined(IL2CPP_STRUCT_VertexCirculator_FWDDECL)
#include <Modloader/app/structs/VertexCirculator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VertexCirculator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

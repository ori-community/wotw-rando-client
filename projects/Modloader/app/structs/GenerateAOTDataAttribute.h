#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenerateAOTDataAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenerateAOTDataAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenerateAOTDataAttribute_DEFINED)
#define IL2CPP_STRUCT_GenerateAOTDataAttribute_DEFINED
struct GenerateAOTDataAttribute__Class;
struct GenerateAOTDataAttribute {
    struct GenerateAOTDataAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GenerateAOTDataAttribute_FWDDECL)
#define IL2CPP_STRUCT_GenerateAOTDataAttribute_FWDDECL
#include <Modloader/app/structs/GenerateAOTDataAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_GenerateAOTDataAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenerateAOTDataAttribute_DEFINED) && !defined(IL2CPP_STRUCT_GenerateAOTDataAttribute_FWDDECL)
#include <Modloader/app/structs/GenerateAOTDataAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenerateAOTDataAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

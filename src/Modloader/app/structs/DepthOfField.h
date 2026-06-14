#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DepthOfField_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DepthOfField_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField_DEFINED)
#include <Modloader/app/structs/DepthOfField__Fields.h>
#if defined(IL2CPP_STRUCT_DepthOfField__Fields_DEFINED)
#define IL2CPP_STRUCT_DepthOfField_DEFINED
struct DepthOfField__Class;
struct DepthOfField {
    struct DepthOfField__Class* klass;
    MonitorData* monitor;
    struct DepthOfField__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DepthOfField_FWDDECL)
#define IL2CPP_STRUCT_DepthOfField_FWDDECL
#include <Modloader/app/structs/DepthOfField__Class.h>
#endif
#undef IL2CPP_STRUCT_DepthOfField_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField_DEFINED) && !defined(IL2CPP_STRUCT_DepthOfField_FWDDECL)
#include <Modloader/app/structs/DepthOfField.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DepthOfField.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

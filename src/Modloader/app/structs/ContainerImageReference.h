#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContainerImageReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContainerImageReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContainerImageReference_DEFINED)
#include <Modloader/app/structs/ContainerImageReference__Fields.h>
#if defined(IL2CPP_STRUCT_ContainerImageReference__Fields_DEFINED)
#define IL2CPP_STRUCT_ContainerImageReference_DEFINED
struct ContainerImageReference__Class;
struct ContainerImageReference {
    struct ContainerImageReference__Class* klass;
    MonitorData* monitor;
    struct ContainerImageReference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContainerImageReference_FWDDECL)
#define IL2CPP_STRUCT_ContainerImageReference_FWDDECL
#include <Modloader/app/structs/ContainerImageReference__Class.h>
#endif
#undef IL2CPP_STRUCT_ContainerImageReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContainerImageReference_DEFINED) && !defined(IL2CPP_STRUCT_ContainerImageReference_FWDDECL)
#include <Modloader/app/structs/ContainerImageReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContainerImageReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

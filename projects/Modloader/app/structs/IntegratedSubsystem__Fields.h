#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntegratedSubsystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntegratedSubsystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntegratedSubsystem__Fields_DEFINED)
#define IL2CPP_STRUCT_IntegratedSubsystem__Fields_DEFINED
struct ISubsystemDescriptor;
struct __declspec(align(8)) IntegratedSubsystem__Fields {
    void* m_Ptr;
    struct ISubsystemDescriptor* m_subsystemDescriptor;
};
#endif
#if !defined(IL2CPP_STRUCT_IntegratedSubsystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_IntegratedSubsystem__Fields_FWDDECL
#include <Modloader/app/structs/ISubsystemDescriptor.h>
#endif
#undef IL2CPP_STRUCT_IntegratedSubsystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntegratedSubsystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IntegratedSubsystem__Fields_FWDDECL)
#include <Modloader/app/structs/IntegratedSubsystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntegratedSubsystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OptionalInstantiationHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OptionalInstantiationHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionalInstantiationHandler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_OptionalInstantiationHandler__Fields_DEFINED
struct OptionalInstantiationHandler_InstanceInfo__Array;
struct OptionalInstantiationHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct OptionalInstantiationHandler_InstanceInfo__Array* m_instances;
    int32_t m_index;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OptionalInstantiationHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_OptionalInstantiationHandler__Fields_FWDDECL
#include <Modloader/app/structs/OptionalInstantiationHandler_InstanceInfo__Array.h>
#endif
#undef IL2CPP_STRUCT_OptionalInstantiationHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionalInstantiationHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OptionalInstantiationHandler__Fields_FWDDECL)
#include <Modloader/app/structs/OptionalInstantiationHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OptionalInstantiationHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

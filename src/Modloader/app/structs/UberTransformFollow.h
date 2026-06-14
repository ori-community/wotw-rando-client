#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberTransformFollow_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberTransformFollow_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberTransformFollow_DEFINED)
#include <Modloader/app/structs/UberTransformFollow__Fields.h>
#if defined(IL2CPP_STRUCT_UberTransformFollow__Fields_DEFINED)
#define IL2CPP_STRUCT_UberTransformFollow_DEFINED
struct UberTransformFollow__Class;
struct UberTransformFollow {
    struct UberTransformFollow__Class* klass;
    MonitorData* monitor;
    struct UberTransformFollow__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberTransformFollow_FWDDECL)
#define IL2CPP_STRUCT_UberTransformFollow_FWDDECL
#include <Modloader/app/structs/UberTransformFollow__Class.h>
#endif
#undef IL2CPP_STRUCT_UberTransformFollow_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberTransformFollow_DEFINED) && !defined(IL2CPP_STRUCT_UberTransformFollow_FWDDECL)
#include <Modloader/app/structs/UberTransformFollow.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberTransformFollow.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

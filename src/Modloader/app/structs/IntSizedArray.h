#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntSizedArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntSizedArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntSizedArray_DEFINED)
#include <Modloader/app/structs/IntSizedArray__Fields.h>
#if defined(IL2CPP_STRUCT_IntSizedArray__Fields_DEFINED)
#define IL2CPP_STRUCT_IntSizedArray_DEFINED
struct IntSizedArray__Class;
struct IntSizedArray {
    struct IntSizedArray__Class* klass;
    MonitorData* monitor;
    struct IntSizedArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntSizedArray_FWDDECL)
#define IL2CPP_STRUCT_IntSizedArray_FWDDECL
#include <Modloader/app/structs/IntSizedArray__Class.h>
#endif
#undef IL2CPP_STRUCT_IntSizedArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntSizedArray_DEFINED) && !defined(IL2CPP_STRUCT_IntSizedArray_FWDDECL)
#include <Modloader/app/structs/IntSizedArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntSizedArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

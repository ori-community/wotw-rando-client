#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrimitiveArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrimitiveArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrimitiveArray_DEFINED)
#include <Modloader/app/structs/PrimitiveArray__Fields.h>
#if defined(IL2CPP_STRUCT_PrimitiveArray__Fields_DEFINED)
#define IL2CPP_STRUCT_PrimitiveArray_DEFINED
struct PrimitiveArray__Class;
struct PrimitiveArray {
    struct PrimitiveArray__Class* klass;
    MonitorData* monitor;
    struct PrimitiveArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrimitiveArray_FWDDECL)
#define IL2CPP_STRUCT_PrimitiveArray_FWDDECL
#include <Modloader/app/structs/PrimitiveArray__Class.h>
#endif
#undef IL2CPP_STRUCT_PrimitiveArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrimitiveArray_DEFINED) && !defined(IL2CPP_STRUCT_PrimitiveArray_FWDDECL)
#include <Modloader/app/structs/PrimitiveArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrimitiveArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BitArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BitArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitArray_DEFINED)
#include <Modloader/app/structs/BitArray__Fields.h>
#if defined(IL2CPP_STRUCT_BitArray__Fields_DEFINED)
#define IL2CPP_STRUCT_BitArray_DEFINED
struct BitArray__Class;
struct BitArray {
    struct BitArray__Class* klass;
    MonitorData* monitor;
    struct BitArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BitArray_FWDDECL)
#define IL2CPP_STRUCT_BitArray_FWDDECL
#include <Modloader/app/structs/BitArray__Class.h>
#endif
#undef IL2CPP_STRUCT_BitArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitArray_DEFINED) && !defined(IL2CPP_STRUCT_BitArray_FWDDECL)
#include <Modloader/app/structs/BitArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BitArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

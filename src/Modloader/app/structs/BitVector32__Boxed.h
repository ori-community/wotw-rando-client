#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BitVector32__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BitVector32__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitVector32__Boxed_DEFINED)
#include <Modloader/app/structs/BitVector32.h>
#if defined(IL2CPP_STRUCT_BitVector32_DEFINED)
#define IL2CPP_STRUCT_BitVector32__Boxed_DEFINED
struct BitVector32__Class;
struct BitVector32__Boxed {
    struct BitVector32__Class* klass;
    MonitorData* monitor;
    struct BitVector32 fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BitVector32__Boxed_FWDDECL)
#define IL2CPP_STRUCT_BitVector32__Boxed_FWDDECL
#include <Modloader/app/structs/BitVector32__Class.h>
#endif
#undef IL2CPP_STRUCT_BitVector32__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitVector32__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_BitVector32__Boxed_FWDDECL)
#include <Modloader/app/structs/BitVector32__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BitVector32__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BitMaskAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BitMaskAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitMaskAttribute_DEFINED)
#include <Modloader/app/structs/BitMaskAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_BitMaskAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_BitMaskAttribute_DEFINED
struct BitMaskAttribute__Class;
struct BitMaskAttribute {
    struct BitMaskAttribute__Class* klass;
    MonitorData* monitor;
    struct BitMaskAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BitMaskAttribute_FWDDECL)
#define IL2CPP_STRUCT_BitMaskAttribute_FWDDECL
#include <Modloader/app/structs/BitMaskAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_BitMaskAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitMaskAttribute_DEFINED) && !defined(IL2CPP_STRUCT_BitMaskAttribute_FWDDECL)
#include <Modloader/app/structs/BitMaskAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BitMaskAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

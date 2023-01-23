#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAtomicValue__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAtomicValue__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAtomicValue__Array_DEFINED)
#define IL2CPP_STRUCT_XmlAtomicValue__Array_DEFINED
struct XmlAtomicValue__Array__Class;
struct XmlAtomicValue;
struct XmlAtomicValue__Array {
    struct XmlAtomicValue__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct XmlAtomicValue* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_XmlAtomicValue__Array_FWDDECL)
#define IL2CPP_STRUCT_XmlAtomicValue__Array_FWDDECL
#include <Modloader/app/structs/XmlAtomicValue.h>
#include <Modloader/app/structs/XmlAtomicValue__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlAtomicValue__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAtomicValue__Array_DEFINED) && !defined(IL2CPP_STRUCT_XmlAtomicValue__Array_FWDDECL)
#include <Modloader/app/structs/XmlAtomicValue__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAtomicValue__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

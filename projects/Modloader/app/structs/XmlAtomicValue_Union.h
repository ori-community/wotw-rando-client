#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAtomicValue_Union_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAtomicValue_Union_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAtomicValue_Union_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_XmlAtomicValue_Union_DEFINED
struct XmlAtomicValue_Union {
    bool boolVal;
    double dblVal;
    int64_t i64Val;
    int32_t i32Val;
    struct DateTime dtVal;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAtomicValue_Union_FWDDECL)
#define IL2CPP_STRUCT_XmlAtomicValue_Union_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlAtomicValue_Union_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAtomicValue_Union_DEFINED) && !defined(IL2CPP_STRUCT_XmlAtomicValue_Union_FWDDECL)
#include <Modloader/app/structs/XmlAtomicValue_Union.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAtomicValue_Union.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

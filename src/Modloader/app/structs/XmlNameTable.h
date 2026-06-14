#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNameTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNameTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNameTable_DEFINED)
#define IL2CPP_STRUCT_XmlNameTable_DEFINED
struct XmlNameTable__Class;
struct XmlNameTable {
    struct XmlNameTable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlNameTable_FWDDECL)
#define IL2CPP_STRUCT_XmlNameTable_FWDDECL
#include <Modloader/app/structs/XmlNameTable__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlNameTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNameTable_DEFINED) && !defined(IL2CPP_STRUCT_XmlNameTable_FWDDECL)
#include <Modloader/app/structs/XmlNameTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNameTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

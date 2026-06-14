#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinXmlDateTime_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinXmlDateTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinXmlDateTime_DEFINED)
#define IL2CPP_STRUCT_BinXmlDateTime_DEFINED
struct BinXmlDateTime__Class;
struct BinXmlDateTime {
    struct BinXmlDateTime__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BinXmlDateTime_FWDDECL)
#define IL2CPP_STRUCT_BinXmlDateTime_FWDDECL
#include <Modloader/app/structs/BinXmlDateTime__Class.h>
#endif
#undef IL2CPP_STRUCT_BinXmlDateTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinXmlDateTime_DEFINED) && !defined(IL2CPP_STRUCT_BinXmlDateTime_FWDDECL)
#include <Modloader/app/structs/BinXmlDateTime.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinXmlDateTime.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDtdParserAdapter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDtdParserAdapter_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdParserAdapter_DEFINED)
#define IL2CPP_STRUCT_IDtdParserAdapter_DEFINED
struct IDtdParserAdapter__Class;
struct IDtdParserAdapter {
    struct IDtdParserAdapter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDtdParserAdapter_FWDDECL)
#define IL2CPP_STRUCT_IDtdParserAdapter_FWDDECL
#include <Modloader/app/structs/IDtdParserAdapter__Class.h>
#endif
#undef IL2CPP_STRUCT_IDtdParserAdapter_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdParserAdapter_DEFINED) && !defined(IL2CPP_STRUCT_IDtdParserAdapter_FWDDECL)
#include <Modloader/app/structs/IDtdParserAdapter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDtdParserAdapter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

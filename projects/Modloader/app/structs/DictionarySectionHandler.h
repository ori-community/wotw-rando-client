#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DictionarySectionHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DictionarySectionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DictionarySectionHandler_DEFINED)
#define IL2CPP_STRUCT_DictionarySectionHandler_DEFINED
struct DictionarySectionHandler__Class;
struct DictionarySectionHandler {
    struct DictionarySectionHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DictionarySectionHandler_FWDDECL)
#define IL2CPP_STRUCT_DictionarySectionHandler_FWDDECL
#include <Modloader/app/structs/DictionarySectionHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DictionarySectionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DictionarySectionHandler_DEFINED) && !defined(IL2CPP_STRUCT_DictionarySectionHandler_FWDDECL)
#include <Modloader/app/structs/DictionarySectionHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DictionarySectionHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

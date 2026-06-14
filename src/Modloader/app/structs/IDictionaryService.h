#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDictionaryService_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDictionaryService_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDictionaryService_DEFINED)
#define IL2CPP_STRUCT_IDictionaryService_DEFINED
struct IDictionaryService__Class;
struct IDictionaryService {
    struct IDictionaryService__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDictionaryService_FWDDECL)
#define IL2CPP_STRUCT_IDictionaryService_FWDDECL
#include <Modloader/app/structs/IDictionaryService__Class.h>
#endif
#undef IL2CPP_STRUCT_IDictionaryService_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDictionaryService_DEFINED) && !defined(IL2CPP_STRUCT_IDictionaryService_FWDDECL)
#include <Modloader/app/structs/IDictionaryService.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDictionaryService.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

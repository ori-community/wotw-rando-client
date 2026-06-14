#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DictionaryHashHelpers_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DictionaryHashHelpers_INITIALIZING
#if !defined(IL2CPP_STRUCT_DictionaryHashHelpers_DEFINED)
#define IL2CPP_STRUCT_DictionaryHashHelpers_DEFINED
struct DictionaryHashHelpers__Class;
struct DictionaryHashHelpers {
    struct DictionaryHashHelpers__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DictionaryHashHelpers_FWDDECL)
#define IL2CPP_STRUCT_DictionaryHashHelpers_FWDDECL
#include <Modloader/app/structs/DictionaryHashHelpers__Class.h>
#endif
#undef IL2CPP_STRUCT_DictionaryHashHelpers_INITIALIZING
#if !defined(IL2CPP_STRUCT_DictionaryHashHelpers_DEFINED) && !defined(IL2CPP_STRUCT_DictionaryHashHelpers_FWDDECL)
#include <Modloader/app/structs/DictionaryHashHelpers.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DictionaryHashHelpers.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

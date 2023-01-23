#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkIterator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkIterator_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkIterator_DEFINED)
#include <Modloader/app/structs/AkIterator__Fields.h>
#if defined(IL2CPP_STRUCT_AkIterator__Fields_DEFINED)
#define IL2CPP_STRUCT_AkIterator_DEFINED
struct AkIterator__Class;
struct AkIterator {
    struct AkIterator__Class* klass;
    MonitorData* monitor;
    struct AkIterator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkIterator_FWDDECL)
#define IL2CPP_STRUCT_AkIterator_FWDDECL
#include <Modloader/app/structs/AkIterator__Class.h>
#endif
#undef IL2CPP_STRUCT_AkIterator_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkIterator_DEFINED) && !defined(IL2CPP_STRUCT_AkIterator_FWDDECL)
#include <Modloader/app/structs/AkIterator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkIterator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

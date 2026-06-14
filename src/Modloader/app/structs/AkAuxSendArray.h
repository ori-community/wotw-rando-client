#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkAuxSendArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkAuxSendArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAuxSendArray_DEFINED)
#include <Modloader/app/structs/AkAuxSendArray__Fields.h>
#if defined(IL2CPP_STRUCT_AkAuxSendArray__Fields_DEFINED)
#define IL2CPP_STRUCT_AkAuxSendArray_DEFINED
struct AkAuxSendArray__Class;
struct AkAuxSendArray {
    struct AkAuxSendArray__Class* klass;
    MonitorData* monitor;
    struct AkAuxSendArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkAuxSendArray_FWDDECL)
#define IL2CPP_STRUCT_AkAuxSendArray_FWDDECL
#include <Modloader/app/structs/AkAuxSendArray__Class.h>
#endif
#undef IL2CPP_STRUCT_AkAuxSendArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAuxSendArray_DEFINED) && !defined(IL2CPP_STRUCT_AkAuxSendArray_FWDDECL)
#include <Modloader/app/structs/AkAuxSendArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkAuxSendArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

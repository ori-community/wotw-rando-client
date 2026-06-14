#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordingContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordingContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordingContext_DEFINED)
#include <Modloader/app/structs/RecordableType__Enum.h>
#if defined(IL2CPP_STRUCT_RecordableType__Enum_DEFINED)
#define IL2CPP_STRUCT_RecordingContext_DEFINED
struct Component_1;
struct RecordingContext {
    RecordableType__Enum _RecordableType_k__BackingField;

    bool _ShouldRecord_k__BackingField;
    struct Component_1* _Puppet_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecordingContext_FWDDECL)
#define IL2CPP_STRUCT_RecordingContext_FWDDECL
#include <Modloader/app/structs/Component_1.h>
#endif
#undef IL2CPP_STRUCT_RecordingContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordingContext_DEFINED) && !defined(IL2CPP_STRUCT_RecordingContext_FWDDECL)
#include <Modloader/app/structs/RecordingContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordingContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

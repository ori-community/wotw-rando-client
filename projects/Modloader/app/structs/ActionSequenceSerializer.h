#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionSequenceSerializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionSequenceSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionSequenceSerializer_DEFINED)
#include <Modloader/app/structs/ActionSequenceSerializer__Fields.h>
#if defined(IL2CPP_STRUCT_ActionSequenceSerializer__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionSequenceSerializer_DEFINED
struct ActionSequenceSerializer__Class;
struct ActionSequenceSerializer {
    struct ActionSequenceSerializer__Class* klass;
    MonitorData* monitor;
    struct ActionSequenceSerializer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionSequenceSerializer_FWDDECL)
#define IL2CPP_STRUCT_ActionSequenceSerializer_FWDDECL
#include <Modloader/app/structs/ActionSequenceSerializer__Class.h>
#endif
#undef IL2CPP_STRUCT_ActionSequenceSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionSequenceSerializer_DEFINED) && !defined(IL2CPP_STRUCT_ActionSequenceSerializer_FWDDECL)
#include <Modloader/app/structs/ActionSequenceSerializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionSequenceSerializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

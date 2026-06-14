#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationInfoEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationInfoEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationInfoEnumerator_DEFINED)
#include <Modloader/app/structs/SerializationInfoEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_SerializationInfoEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationInfoEnumerator_DEFINED
struct SerializationInfoEnumerator__Class;
struct SerializationInfoEnumerator {
    struct SerializationInfoEnumerator__Class* klass;
    MonitorData* monitor;
    struct SerializationInfoEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationInfoEnumerator_FWDDECL)
#define IL2CPP_STRUCT_SerializationInfoEnumerator_FWDDECL
#include <Modloader/app/structs/SerializationInfoEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationInfoEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationInfoEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_SerializationInfoEnumerator_FWDDECL)
#include <Modloader/app/structs/SerializationInfoEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationInfoEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyValuePairConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyValuePairConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyValuePairConverter_DEFINED)
#define IL2CPP_STRUCT_KeyValuePairConverter_DEFINED
struct KeyValuePairConverter__Class;
struct KeyValuePairConverter {
    struct KeyValuePairConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_KeyValuePairConverter_FWDDECL)
#define IL2CPP_STRUCT_KeyValuePairConverter_FWDDECL
#include <Modloader/app/structs/KeyValuePairConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_KeyValuePairConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyValuePairConverter_DEFINED) && !defined(IL2CPP_STRUCT_KeyValuePairConverter_FWDDECL)
#include <Modloader/app/structs/KeyValuePairConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyValuePairConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

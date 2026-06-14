#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrackingStringDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrackingStringDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackingStringDictionary_DEFINED)
#include <Modloader/app/structs/TrackingStringDictionary__Fields.h>
#if defined(IL2CPP_STRUCT_TrackingStringDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_TrackingStringDictionary_DEFINED
struct TrackingStringDictionary__Class;
struct TrackingStringDictionary {
    struct TrackingStringDictionary__Class* klass;
    MonitorData* monitor;
    struct TrackingStringDictionary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TrackingStringDictionary_FWDDECL)
#define IL2CPP_STRUCT_TrackingStringDictionary_FWDDECL
#include <Modloader/app/structs/TrackingStringDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_TrackingStringDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackingStringDictionary_DEFINED) && !defined(IL2CPP_STRUCT_TrackingStringDictionary_FWDDECL)
#include <Modloader/app/structs/TrackingStringDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrackingStringDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

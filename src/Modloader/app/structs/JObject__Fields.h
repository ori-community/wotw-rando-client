#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JObject__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JObject__Fields_DEFINED)
#include <Modloader/app/structs/JContainer__Fields.h>
#if defined(IL2CPP_STRUCT_JContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_JObject__Fields_DEFINED
struct JPropertyKeyedCollection;
struct PropertyChangedEventHandler;
struct PropertyChangingEventHandler;
struct JObject__Fields {
    struct JContainer__Fields _;
    struct JPropertyKeyedCollection* _properties;
    struct PropertyChangedEventHandler* PropertyChanged;
    struct PropertyChangingEventHandler* PropertyChanging;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JObject__Fields_FWDDECL)
#define IL2CPP_STRUCT_JObject__Fields_FWDDECL
#include <Modloader/app/structs/JPropertyKeyedCollection.h>
#include <Modloader/app/structs/PropertyChangedEventHandler.h>
#include <Modloader/app/structs/PropertyChangingEventHandler.h>
#endif
#undef IL2CPP_STRUCT_JObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JObject__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JObject__Fields_FWDDECL)
#include <Modloader/app/structs/JObject__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JObject__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

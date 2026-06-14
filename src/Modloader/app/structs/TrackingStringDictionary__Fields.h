#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrackingStringDictionary__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrackingStringDictionary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackingStringDictionary__Fields_DEFINED)
#include <Modloader/app/structs/StringDictionary__Fields.h>
#if defined(IL2CPP_STRUCT_StringDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_TrackingStringDictionary__Fields_DEFINED
struct TrackingStringDictionary__Fields {
    struct StringDictionary__Fields _;
    bool isChanged;
    bool isReadOnly;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TrackingStringDictionary__Fields_FWDDECL)
#define IL2CPP_STRUCT_TrackingStringDictionary__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TrackingStringDictionary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackingStringDictionary__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TrackingStringDictionary__Fields_FWDDECL)
#include <Modloader/app/structs/TrackingStringDictionary__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrackingStringDictionary__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

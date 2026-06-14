#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Group__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Group__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Group__Fields_DEFINED)
#include <Modloader/app/structs/Capture__Fields.h>
#if defined(IL2CPP_STRUCT_Capture__Fields_DEFINED)
#define IL2CPP_STRUCT_Group__Fields_DEFINED
struct Int32__Array;
struct CaptureCollection;
struct String;
struct Group__Fields {
    struct Capture__Fields _;
    struct Int32__Array* _caps;
    int32_t _capcount;
    struct CaptureCollection* _capcoll;
    struct String* _name;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Group__Fields_FWDDECL)
#define IL2CPP_STRUCT_Group__Fields_FWDDECL
#include <Modloader/app/structs/CaptureCollection.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Group__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Group__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Group__Fields_FWDDECL)
#include <Modloader/app/structs/Group__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Group__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeParse__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeParse__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeParse__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DateTimeParse__StaticFields_DEFINED
struct DateTimeParse_MatchNumberDelegate;
struct DateTimeParse_DS__Enum__Array__Array;
struct DateTimeParse__StaticFields {
    struct DateTimeParse_MatchNumberDelegate* m_hebrewNumberParser;
    struct DateTimeParse_DS__Enum__Array__Array* dateParsingStates;
};
#endif
#if !defined(IL2CPP_STRUCT_DateTimeParse__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DateTimeParse__StaticFields_FWDDECL
#include <Modloader/app/structs/DateTimeParse_DS__Enum__Array__Array.h>
#include <Modloader/app/structs/DateTimeParse_MatchNumberDelegate.h>
#endif
#undef IL2CPP_STRUCT_DateTimeParse__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeParse__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeParse__StaticFields_FWDDECL)
#include <Modloader/app/structs/DateTimeParse__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeParse__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

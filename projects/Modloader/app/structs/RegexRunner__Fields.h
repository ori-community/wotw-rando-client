#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexRunner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexRunner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexRunner__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexRunner__Fields_DEFINED
struct String;
struct Int32__Array;
struct Match;
struct Regex;
struct __declspec(align(8)) RegexRunner__Fields {
    int32_t runtextbeg;
    int32_t runtextend;
    int32_t runtextstart;
    struct String* runtext;
    int32_t runtextpos;
    struct Int32__Array* runtrack;
    int32_t runtrackpos;
    struct Int32__Array* runstack;
    int32_t runstackpos;
    struct Int32__Array* runcrawl;
    int32_t runcrawlpos;
    int32_t runtrackcount;
    struct Match* runmatch;
    struct Regex* runregex;
    int32_t timeout;
    bool ignoreTimeout;
    int32_t timeoutOccursAt;
    int32_t timeoutChecksToSkip;
};
#endif
#if !defined(IL2CPP_STRUCT_RegexRunner__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegexRunner__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Match.h>
#include <Modloader/app/structs/Regex.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RegexRunner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexRunner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegexRunner__Fields_FWDDECL)
#include <Modloader/app/structs/RegexRunner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexRunner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

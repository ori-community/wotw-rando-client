#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlockingCollection_1_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlockingCollection_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockingCollection_1_System_Object___Fields_DEFINED)
#define IL2CPP_STRUCT_BlockingCollection_1_System_Object___Fields_DEFINED
struct IProducerConsumerCollection_1_System_Object_;
struct SemaphoreSlim;
struct CancellationTokenSource;
struct __declspec(align(8)) BlockingCollection_1_System_Object___Fields {
    struct IProducerConsumerCollection_1_System_Object_* _collection;
    int32_t _boundedCapacity;
    struct SemaphoreSlim* _freeNodes;
    struct SemaphoreSlim* _occupiedNodes;
    bool _isDisposed;
    struct CancellationTokenSource* _consumersCancellationTokenSource;
    struct CancellationTokenSource* _producersCancellationTokenSource;
    int32_t _currentAdders;
};
#endif
#if !defined(IL2CPP_STRUCT_BlockingCollection_1_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_BlockingCollection_1_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/CancellationTokenSource.h>
#include <Modloader/app/structs/IProducerConsumerCollection_1_System_Object_.h>
#include <Modloader/app/structs/SemaphoreSlim.h>
#endif
#undef IL2CPP_STRUCT_BlockingCollection_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockingCollection_1_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_BlockingCollection_1_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/BlockingCollection_1_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlockingCollection_1_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

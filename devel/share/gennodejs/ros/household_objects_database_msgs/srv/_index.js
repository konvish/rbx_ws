
"use strict";

let GetModelList = require('./GetModelList.js')
let GetModelScans = require('./GetModelScans.js')
let SaveScan = require('./SaveScan.js')
let TranslateRecognitionId = require('./TranslateRecognitionId.js')
let GetModelMesh = require('./GetModelMesh.js')
let GetModelDescription = require('./GetModelDescription.js')

module.exports = {
  GetModelList: GetModelList,
  GetModelScans: GetModelScans,
  SaveScan: SaveScan,
  TranslateRecognitionId: TranslateRecognitionId,
  GetModelMesh: GetModelMesh,
  GetModelDescription: GetModelDescription,
};
